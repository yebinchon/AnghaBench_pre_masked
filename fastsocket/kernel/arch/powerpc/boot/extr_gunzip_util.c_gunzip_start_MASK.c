
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_in; int avail_in; void* next_in; int workspace; } ;
struct gunzip_state {TYPE_1__ s; int scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct gunzip_state*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct gunzip_state *VAR_8, void *VAR_9, int VAR_10)
{
 char *VAR_11 = VAR_9;
 int VAR_12 = 0;

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));


 if ((VAR_11[0] == 0x1f) && (VAR_11[1] == 0x8b)) {

  int VAR_13, VAR_14;

  VAR_8->s.workspace = VAR_8->scratch;
  if (FUNC_3() > sizeof(VAR_8->scratch))
   FUNC_0("insufficient scratch space for gunzip\n\r");


  VAR_12 = 10;
  VAR_14 = VAR_11[3];
  if (VAR_11[2] != VAR_6 || (VAR_14 & VAR_5) != 0)
   FUNC_0("bad gzipped data\n\r");
  if ((VAR_14 & VAR_1) != 0)
   VAR_12 = 12 + VAR_11[10] + (VAR_11[11] << 8);
  if ((VAR_14 & VAR_4) != 0)
   while (VAR_11[VAR_12++] != 0)
    ;
  if ((VAR_14 & VAR_0) != 0)
   while (VAR_11[VAR_12++] != 0)
    ;
  if ((VAR_14 & VAR_2) != 0)
   VAR_12 += 2;
  if (VAR_12 >= VAR_10)
   FUNC_0("gunzip_start: ran out of data in header\n\r");

  VAR_13 = FUNC_2(&VAR_8->s, -VAR_3);
  if (VAR_13 != VAR_7)
   FUNC_0("inflateInit2 returned %d\n\r", VAR_13);
 }

 VAR_8->s.total_in = VAR_12;
 VAR_8->s.next_in = VAR_9 + VAR_12;
 VAR_8->s.avail_in = VAR_10 - VAR_12;
}

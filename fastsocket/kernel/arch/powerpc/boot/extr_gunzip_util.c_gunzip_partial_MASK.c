
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* next_out; int avail_out; int avail_in; int next_in; int msg; scalar_t__ workspace; } ;
struct gunzip_state {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(struct gunzip_state *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3->s.workspace) {

  int VAR_7;

  VAR_3->s.next_out = VAR_4;
  VAR_3->s.avail_out = VAR_5;
  VAR_7 = FUNC_3(&VAR_3->s, VAR_0);
  if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
   FUNC_0("inflate returned %d msg: %s\n\r", VAR_7, VAR_3->s.msg);
  VAR_6 = VAR_3->s.next_out - (unsigned char *)VAR_4;
 } else {

  VAR_6 = FUNC_2(VAR_3->s.avail_in, (unsigned)VAR_5);
  FUNC_1(VAR_4, VAR_3->s.next_in, VAR_6);
  VAR_3->s.next_in += VAR_6;
  VAR_3->s.avail_in -= VAR_6;
 }
 return VAR_6;
}

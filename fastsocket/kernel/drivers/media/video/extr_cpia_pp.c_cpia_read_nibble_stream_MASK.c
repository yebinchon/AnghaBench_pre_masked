
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phase; } ;
struct parport {int name; TYPE_1__ ieee1284; } ;


 int FUNC_0 (char*,int ,...) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct parport*,int ,int ) ;
 int FUNC_2 (struct parport*) ;
 scalar_t__ FUNC_3 (struct parport*,int ,int ) ;

__attribute__((used)) static size_t FUNC_4(struct parport *VAR_4,
          void *VAR_5, size_t VAR_6,
          int VAR_7)
{
 int VAR_8;
 unsigned char *VAR_9 = VAR_5;
 int VAR_10 = 0;

 for (VAR_8=0; VAR_8 < VAR_6; VAR_8++) {
  unsigned char VAR_11[2], VAR_12 = 0;
  int VAR_13;


  if (VAR_10 > 3 )
   break;


  FUNC_1 (VAR_4,
          VAR_2,
          VAR_2);


  VAR_4->ieee1284.phase = VAR_1;
  if (FUNC_3 (VAR_4,
          VAR_3, 0)) {

     FUNC_0("%s: Nibble timeout at event 9 (%d bytes)\n",
     VAR_4->name, VAR_8/2);
   FUNC_1 (VAR_4, VAR_2, 0);
   break;
  }


  VAR_11[0] = FUNC_2 (VAR_4) >>3;


  FUNC_1 (VAR_4, VAR_2, 0);


  if (FUNC_3 (VAR_4,
          VAR_3,
          VAR_3)) {

   FUNC_0("%s: Nibble timeout at event 11\n",
     VAR_4->name);
   break;
  }


  VAR_11[1] = FUNC_2 (VAR_4) >>3;


  for (VAR_13 = 0; VAR_13 < 2 ; VAR_13++ ) {
   VAR_11[VAR_13] &= ~8;
   if ((VAR_11[VAR_13] & 0x10) == 0)
    VAR_11[VAR_13] |= 8;
   VAR_11[VAR_13] &= 0xf;
  }
  VAR_12 = (VAR_11[0] |(VAR_11[1] << 4));
  *VAR_9++ = VAR_12;

  if(VAR_12 == VAR_0)
    VAR_10++;
  else
    VAR_10 = 0;
 }
 return VAR_8;
}

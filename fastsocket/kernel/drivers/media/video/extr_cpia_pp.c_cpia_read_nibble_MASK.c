
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phase; } ;
struct parport {TYPE_3__* physport; int name; TYPE_1__ ieee1284; } ;
struct TYPE_5__ {int phase; } ;
struct TYPE_6__ {TYPE_2__ ieee1284; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct parport*,int ,int ) ;
 int FUNC_2 (struct parport*) ;
 scalar_t__ FUNC_3 (struct parport*,int ,int ) ;

__attribute__((used)) static size_t FUNC_4 (struct parport *VAR_6,
    void *VAR_7, size_t VAR_8,
    int VAR_9)
{



 unsigned char *VAR_10 = VAR_7;
 int VAR_11;
 unsigned char VAR_12 = 0;

 VAR_8 *= 2;
 for (VAR_11=0; VAR_11 < VAR_8; VAR_11++) {
  unsigned char VAR_13;
  if (((VAR_11 ) == 0) &&
      (FUNC_2(VAR_6) & VAR_5)) {
   FUNC_0("%s: No more nibble data (%d bytes)\n",
       VAR_6->name, VAR_11/2);
   goto end_of_data;
  }


  FUNC_1 (VAR_6,
          VAR_3,
          VAR_3);


  VAR_6->ieee1284.phase = VAR_1;
  if (FUNC_3 (VAR_6,
          VAR_4, 0)) {

     FUNC_0("%s: Nibble timeout at event 9 (%d bytes)\n",
     VAR_6->name, VAR_11/2);
   FUNC_1 (VAR_6, VAR_3, 0);
   break;
  }



  VAR_13 = FUNC_2 (VAR_6) >> 3;
  VAR_13 &= ~8;
  if ((VAR_13 & 0x10) == 0)
   VAR_13 |= 8;
  VAR_13 &= 0xf;


  FUNC_1 (VAR_6, VAR_3, 0);


  if (FUNC_3 (VAR_6,
          VAR_4,
          VAR_4)) {

   FUNC_0("%s: Nibble timeout at event 11\n",
     VAR_6->name);
   break;
  }

  if (VAR_11 & 1) {

   VAR_12 |= VAR_13 << 4;
   *VAR_10++ = VAR_12;
  } else
   VAR_12 = VAR_13;
 }

 if (VAR_11 == VAR_8) {

  if (FUNC_2 (VAR_6) & VAR_5) {
  end_of_data:

   FUNC_1 (VAR_6,
           VAR_3,
           VAR_3);
   VAR_6->physport->ieee1284.phase = VAR_2;
  }
  else
   VAR_6->physport->ieee1284.phase = VAR_0;
 }

 return VAR_11/2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int address; unsigned char dor; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int select_date; } ;


 int FUNC_0 (char*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (int,unsigned char) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char,int ) ;
 scalar_t__ FUNC_4 (unsigned char,unsigned char) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(int VAR_6, char VAR_7, char VAR_8)
{
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;

 if (VAR_0->address == -1)
  return -1;

 VAR_12 = VAR_0->dor;
 VAR_11 = (VAR_12 & VAR_7) | VAR_8;
 if (VAR_11 != VAR_12) {
  VAR_9 = VAR_12 & 0x3;
  if (FUNC_4(VAR_12, VAR_9) && !FUNC_4(VAR_11, VAR_9)) {
   VAR_10 = FUNC_1(VAR_6, VAR_9);





   FUNC_2(VAR_10);
  }
  VAR_0->dor = VAR_11;
  FUNC_3(VAR_11, VAR_2);

  VAR_9 = VAR_11 & 0x3;
  if (!FUNC_4(VAR_12, VAR_9) && FUNC_4(VAR_11, VAR_9)) {
   VAR_10 = FUNC_1(VAR_6, VAR_9);
   VAR_4->select_date = VAR_5;
  }
 }
 return VAR_12;
}

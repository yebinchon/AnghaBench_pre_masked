
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36060 {int status; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct zr36060*) ;

__attribute__((used)) static void
FUNC_3 (struct zr36060 *VAR_1)
{
 int VAR_2 = 0;

 while (FUNC_2(VAR_1) & VAR_0) {
  FUNC_1(1);
  if (VAR_2++ > 200000) {
   FUNC_0(1,
    "%s: timeout at wait_end (last status: 0x%02x)\n",
    VAR_1->name, VAR_1->status);
   break;
  }
 }
}

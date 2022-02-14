
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36050 {int status1; int name; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct zr36050*) ;

__attribute__((used)) static void
FUNC_3 (struct zr36050 *VAR_0)
{
 int VAR_1 = 0;

 while (!(FUNC_2(VAR_0) & 0x4)) {
  FUNC_1(1);
  if (VAR_1++ > 200000) {
   FUNC_0(1,
    "%s: timeout at wait_end (last status: 0x%02x)\n",
    VAR_0->name, VAR_0->status1);
   break;
  }
 }
}

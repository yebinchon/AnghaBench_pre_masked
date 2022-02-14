
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maxiradio {int io; } ;


 int FUNC_0 (struct maxiradio*,int,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct maxiradio *VAR_1, int VAR_2)
{
 if (VAR_2 != 0) {
  FUNC_0(VAR_1, 1, "Radio powered on\n");
  FUNC_1(VAR_0, VAR_1->io);
 } else {
  FUNC_0(VAR_1, 1, "Radio powered off\n");
  FUNC_1(0, VAR_1->io);
 }
}

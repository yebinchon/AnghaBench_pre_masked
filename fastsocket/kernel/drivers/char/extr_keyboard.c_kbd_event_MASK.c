
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct input_handle *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, int VAR_8)
{
 if (VAR_6 == VAR_1 && VAR_7 == VAR_2 && FUNC_0(VAR_5->dev))
  FUNC_2(VAR_8);
 if (VAR_6 == VAR_0)
  FUNC_1(VAR_7, VAR_8, FUNC_0(VAR_5->dev));
 FUNC_4(&VAR_4);
 VAR_3 = 1;
 FUNC_3();
}

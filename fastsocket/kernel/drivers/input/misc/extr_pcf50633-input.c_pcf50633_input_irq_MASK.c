
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_input {int input_dev; int pcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_5, void *VAR_6)
{
 struct pcf50633_input *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6;


 VAR_8 = FUNC_2(VAR_7->pcf, VAR_4)
      & VAR_3;

 if (VAR_5 == VAR_1 && !VAR_8)
  FUNC_0(VAR_7->input_dev, VAR_0, 1);
 else if (VAR_5 == VAR_2 && VAR_8)
  FUNC_0(VAR_7->input_dev, VAR_0, 0);

 FUNC_1(VAR_7->input_dev);
}

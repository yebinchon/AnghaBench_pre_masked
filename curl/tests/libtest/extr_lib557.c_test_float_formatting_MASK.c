
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,int,char*,double,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(void)
{
  int VAR_2 = 0;
  char VAR_3[512];
  FUNC_0(VAR_3, sizeof(VAR_3), "%f", 9.0);
  VAR_2 += FUNC_2(VAR_3, "9.000000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%.1f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.1");

  FUNC_0(VAR_3, sizeof(VAR_3), "%.2f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.10");

  FUNC_0(VAR_3, sizeof(VAR_3), "%.0f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9");

  FUNC_0(VAR_3, sizeof(VAR_3), "%0f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%10f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "  9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%10.3f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "     9.100");

  FUNC_0(VAR_3, sizeof(VAR_3), "%-10.3f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.100     ");

  FUNC_0(VAR_3, sizeof(VAR_3), "%-10.3f", 9.123456);
  VAR_2 += FUNC_2(VAR_3, "9.123     ");

  FUNC_0(VAR_3, sizeof(VAR_3), "%.-2f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", 10, 9.1);
  VAR_2 += FUNC_2(VAR_3, "  9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", 3, 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", 6, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.298765");

  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", 6, 9.298765);
  VAR_2 += FUNC_2(VAR_3, "9.298765");

  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", 6, 9.29876);
  VAR_2 += FUNC_2(VAR_3, "9.298760");

  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 6, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.298765");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 5, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.29877");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 4, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.2988");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 3, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.299");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 2, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.30");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 1, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9.3");
  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", 0, 9.2987654);
  VAR_2 += FUNC_2(VAR_3, "9");




  FUNC_0(VAR_3, sizeof(VAR_3), "%.*f", (1<<30), 9.2987654);
  VAR_2 += FUNC_3(VAR_3, 325);

  FUNC_0(VAR_3, sizeof(VAR_3), "%10000.10000f", 9.2987654);
  VAR_2 += FUNC_3(VAR_3, 325);

  FUNC_0(VAR_3, sizeof(VAR_3), "%240.10000f",
                 123456789123456789123456789.2987654);
  VAR_2 += FUNC_3(VAR_3, 325);


  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", VAR_0, 9.1);
  VAR_2 += FUNC_2(VAR_3, "9.100000");



  FUNC_0(VAR_3, sizeof(VAR_3), "%*f", (1<<30), 9.1);
  VAR_2 += FUNC_2(VAR_3, "                                                                                                                                                                                                                                                                                                                             9.100000");
  FUNC_0(VAR_3, sizeof(VAR_3), "%100000f", 9.1);
  VAR_2 += FUNC_2(VAR_3, "                                                                                                                                                                                                                                                                                                                             9.100000");

  FUNC_0(VAR_3, sizeof(VAR_3), "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 317);

  FUNC_0(VAR_3, 2, "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 1);
  FUNC_0(VAR_3, 3, "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 2);
  FUNC_0(VAR_3, 4, "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 3);
  FUNC_0(VAR_3, 5, "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 4);
  FUNC_0(VAR_3, 6, "%f", VAR_1);
  VAR_2 += FUNC_3(VAR_3, 5);

  if(!VAR_2)
    FUNC_1("All float strings tests OK!\n");
  else
    FUNC_1("test_float_formatting Failed!\n");

  return VAR_2;
}

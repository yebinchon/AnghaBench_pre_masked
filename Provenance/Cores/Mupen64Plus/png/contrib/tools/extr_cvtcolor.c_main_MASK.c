
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double FUNC_0 (double,double,double) ;
 double FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*,int) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 int FUNC_6 (char*,...) ;
 double FUNC_7 (double) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(int VAR_2, const char **VAR_3)
{
   const char *VAR_4 = *VAR_3++;
   int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
   int VAR_8 = 0;
   double VAR_9[4];





   FUNC_2(VAR_0);

   VAR_9[3] = VAR_9[2] = VAR_9[1] = VAR_9[0] = 0;

   while (--VAR_2 > 0 && **VAR_3 == '-')
   {
      const char *VAR_10 = 1+*VAR_3++;

      if (FUNC_8(VAR_10, "sRGB") == 0)
         VAR_5 = 0;

      else if (FUNC_8(VAR_10, "linear") == 0)
         VAR_5 = 1;

      else if (FUNC_8(VAR_10, "gray") == 0)
         VAR_6 = 1, VAR_7 = 0;

      else if (FUNC_8(VAR_10, "color") == 0)
         VAR_6 = 0, VAR_7 = 1;

      else
         FUNC_9(VAR_4);
   }

   switch (VAR_2)
   {
      default:
         FUNC_9(VAR_4);
         break;

      case 4:
         VAR_9[3] = FUNC_1(VAR_4, VAR_3[3], VAR_5);
         ++VAR_8;
      case 3:
         VAR_9[2] = FUNC_1(VAR_4, VAR_3[2], VAR_5);
         ++VAR_8;
      case 2:
         VAR_9[1] = FUNC_1(VAR_4, VAR_3[1], VAR_5);
         ++VAR_8;
      case 1:
         VAR_9[0] = FUNC_1(VAR_4, VAR_3[0], VAR_5);
         ++VAR_8;
         break;
      }

   if (VAR_5)
   {
      int VAR_11;
      int VAR_12 = VAR_8;

      if ((VAR_12 & 1) == 0)
         --VAR_12;

      for (VAR_11=0; VAR_11<VAR_12; ++VAR_11) VAR_9[VAR_11] = FUNC_4(VAR_9[VAR_11] / 255);
      if (VAR_12 < VAR_8)
         VAR_9[VAR_12] = VAR_9[VAR_12] / 255;
   }

   else
   {
      int VAR_13;
      for (VAR_13=0; VAR_13<4; ++VAR_13) VAR_9[VAR_13] /= 65535;

      if ((VAR_8 & 1) == 0)
      {
         double VAR_14 = VAR_9[VAR_8-1];

         if (VAR_14 > 0)
            for (VAR_13=0; VAR_13<VAR_8-1; ++VAR_13) VAR_9[VAR_13] /= VAR_14;
         else
            for (VAR_13=0; VAR_13<VAR_8-1; ++VAR_13) VAR_9[VAR_13] = 1;
      }
   }

   if (VAR_6)
   {
      if (VAR_8 < 3)
      {
         FUNC_3(VAR_1, "%s: too few channels (%d) for -gray\n",
            VAR_4, VAR_8);
         FUNC_9(VAR_4);
      }

      VAR_9[0] = FUNC_0(VAR_9[0], VAR_9[1], VAR_9[2]);
      VAR_8 -= 2;
   }

   if (VAR_7)
   {
      if (VAR_8 > 2)
      {
         FUNC_3(VAR_1, "%s: too many channels (%d) for -color\n",
            VAR_4, VAR_8);
         FUNC_9(VAR_4);
      }

      VAR_9[3] = VAR_9[1];
      VAR_9[2] = VAR_9[1] = VAR_9[0];
   }

   if (VAR_5)
   {
      int VAR_15;
      if ((VAR_8 & 1) == 0)
      {
         double VAR_16 = VAR_9[VAR_8-1];
         for (VAR_15=0; VAR_15<VAR_8-1; ++VAR_15) VAR_9[VAR_15] *= VAR_16;
      }

      for (VAR_15=0; VAR_15<VAR_8; ++VAR_15) VAR_9[VAR_15] = FUNC_5(VAR_9[VAR_15] * 65535);
   }

   else
   {
      int VAR_17 = (VAR_8+1)&~1;
      while (--VAR_17 >= 0)
         VAR_9[VAR_17] = FUNC_7(VAR_9[VAR_17]);

      for (VAR_17=0; VAR_17<VAR_8; ++VAR_17) VAR_9[VAR_17] = FUNC_5(VAR_9[VAR_17] * 255);
   }

   {
      int VAR_18;
      for (VAR_18=0; VAR_18<VAR_8; ++VAR_18) FUNC_6(" %g", VAR_9[VAR_18]);
   }
   FUNC_6("\n");

   return 0;
}

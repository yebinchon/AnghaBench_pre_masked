
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int png_size_t ;
typedef int png_const_structrp ;
typedef int* png_charp ;


 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (double) ;
 int FUNC_1 (double,int*) ;
 double FUNC_2 (double,double*) ;
 int FUNC_3 (int ,char*) ;
 double FUNC_4 (int) ;

void
FUNC_5(png_const_structrp VAR_3, png_charp VAR_4, png_size_t VAR_5,
    double VAR_6, unsigned int VAR_7)
{





   if (VAR_7 < 1)
      VAR_7 = VAR_0;


   if (VAR_7 > VAR_0+1)
      VAR_7 = VAR_0+1;


   if (VAR_5 >= VAR_7+5)
   {
      if (VAR_6 < 0)
      {
         VAR_6 = -VAR_6;
         *VAR_4++ = 45;
         --VAR_5;
      }

      if (VAR_6 >= VAR_2 && VAR_6 <= VAR_1)
      {
         int VAR_8;
         double VAR_9;
         (void)FUNC_1(VAR_6, &VAR_8);

         VAR_8 = (VAR_8 * 77) >> 8;


         VAR_9 = FUNC_4(VAR_8);

         while (VAR_9 < VAR_2 || VAR_9 < VAR_6)
         {

            double VAR_10 = FUNC_4(VAR_8+1);

            if (VAR_10 <= VAR_1)
               ++VAR_8, VAR_9 = VAR_10;

            else
               break;
         }
         VAR_6 /= VAR_9;
         while (VAR_6 >= 1) VAR_6 /= 10, ++VAR_8;







         {
            unsigned int VAR_11, VAR_12, VAR_13;
            char VAR_14[10];




            if (VAR_8 < 0 && VAR_8 > -3)
            {
               VAR_11 = (unsigned int)(-VAR_8);
               VAR_8 = 0;
            }
            else
               VAR_11 = 0;




            VAR_12 = VAR_11;
            VAR_13 = 0;

            do
            {
               double VAR_15;

               VAR_6 *= 10;





               if (VAR_13+VAR_11+1 < VAR_7+VAR_12)
                  VAR_6 = FUNC_2(VAR_6, &VAR_15);

               else
               {
                  VAR_15 = FUNC_0(VAR_6 + .5);

                  if (VAR_15 > 9)
                  {

                     if (VAR_11 > 0)
                     {
                        --VAR_11, VAR_15 = 1;
                        if (VAR_13 == 0) --VAR_12;
                     }
                     else
                     {
                        while (VAR_13 > 0 && VAR_15 > 9)
                        {
                           int VAR_16 = *--VAR_4;

                           if (VAR_8 != (-1))
                              ++VAR_8;

                           else if (VAR_16 == 46)
                           {
                              VAR_16 = *--VAR_4, ++VAR_5;




                              VAR_8 = 1;
                           }

                           --VAR_13;
                           VAR_15 = VAR_16 - 47;
                        }





                        if (VAR_15 > 9)
                        {
                           if (VAR_8 == (-1))
                           {




                              int VAR_17 = *--VAR_4;

                              if (VAR_17 == 46)
                                 ++VAR_5, VAR_8 = 1;




                           }
                           else
                              ++VAR_8;


                           VAR_15 = 1;
                        }
                     }
                  }
                  VAR_6 = 0;
               }

               if (VAR_15 == 0)
               {
                  ++VAR_11;
                  if (VAR_13 == 0) ++VAR_12;
               }
               else
               {

                  VAR_13 += VAR_11 - VAR_12;
                  VAR_12 = 0;

                  while (VAR_11 > 0)
                  {




                     if (VAR_8 != (-1))
                     {
                        if (VAR_8 == 0) *VAR_4++ = 46, --VAR_5;

                        --VAR_8;
                     }
                     *VAR_4++ = 48, --VAR_11;
                  }

                  if (VAR_8 != (-1))
                  {
                     if (VAR_8 == 0)
                        *VAR_4++ = 46, --VAR_5;

                     --VAR_8;
                  }
                  *VAR_4++ = (char)(48 + (int)VAR_15), ++VAR_13;
               }
            }
            while (VAR_13+VAR_11 < VAR_7+VAR_12 && VAR_6 > VAR_2);
            if (VAR_8 >= (-1) && VAR_8 <= 2)
            {







               while (--VAR_8 >= 0) *VAR_4++ = 48;

               *VAR_4 = 0;




               return;
            }







            VAR_5 -= VAR_13;

            *VAR_4++ = 69, --VAR_5;





            {
               unsigned int VAR_18;

               if (VAR_8 < 0)
               {
                  *VAR_4++ = 45, --VAR_5;
                  VAR_18 = (unsigned int)(-VAR_8);
               }

               else
                  VAR_18 = (unsigned int)VAR_8;

               VAR_13 = 0;

               while (VAR_18 > 0)
               {
                  VAR_14[VAR_13++] = (char)(48 + VAR_18 % 10);
                  VAR_18 /= 10;
               }
            }




            if (VAR_5 > VAR_13)
            {
               while (VAR_13 > 0) *VAR_4++ = VAR_14[--VAR_13];

               *VAR_4 = 0;

               return;
            }
         }
      }
      else if (!(VAR_6 >= VAR_2))
      {
         *VAR_4++ = 48;
         *VAR_4 = 0;
         return;
      }
      else
      {
         *VAR_4++ = 105;
         *VAR_4++ = 110;
         *VAR_4++ = 102;
         *VAR_4 = 0;
         return;
      }
   }


   FUNC_3(VAR_3, "ASCII conversion buffer too small");
}

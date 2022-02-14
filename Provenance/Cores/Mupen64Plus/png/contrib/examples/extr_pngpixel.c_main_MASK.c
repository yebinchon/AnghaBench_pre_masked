
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long png_uint_32 ;
typedef int * png_structp ;
typedef int * png_infop ;
typedef int * png_bytep ;
typedef int FILE ;



 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_0 (long,int) ;
 long FUNC_1 (int) ;
 long FUNC_2 (int) ;
 long FUNC_3 (int) ;
 long FUNC_4 (int) ;
 long FUNC_5 (char const*) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *,int *,int *) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (int **,int *,int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *,long*,long*,int*,int*,int*,int*,int*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *,int *,long) ;
 scalar_t__ FUNC_23 (int ) ;
 int VAR_2 ;

int FUNC_24(int VAR_3, const char **VAR_4)
{






   volatile int VAR_5 = 1 ;

   if (VAR_3 == 4)
   {
      long VAR_6 = FUNC_5(VAR_4[1]);
      long VAR_7 = FUNC_5(VAR_4[2]);
      FILE *VAR_8 = FUNC_6(VAR_4[3], "rb");
      volatile png_bytep VAR_9 = ((void*)0);

      if (VAR_8 != ((void*)0))
      {






         png_structp VAR_10 = FUNC_9(VAR_1,
            ((void*)0), ((void*)0), ((void*)0));

         if (VAR_10 != ((void*)0))
         {
            png_infop VAR_11 = FUNC_8(VAR_10);

            if (VAR_11 != ((void*)0))
            {





               if (FUNC_23(FUNC_17(VAR_10)) == 0)
               {
                  png_uint_32 VAR_12, VAR_13;
                  int VAR_14, VAR_15, VAR_16,
                     VAR_17, VAR_18;
                  png_bytep VAR_19;







                  FUNC_16(VAR_10, VAR_8);




                  FUNC_19(VAR_10, VAR_11);






                  VAR_9 = FUNC_18(VAR_10, FUNC_15(VAR_10,
                     VAR_11));




                  VAR_19 = VAR_9;





                  if (FUNC_14(VAR_10, VAR_11, &VAR_12, &VAR_13,
                     &VAR_14, &VAR_15, &VAR_16,
                     &VAR_17, &VAR_18))
                  {
                     int VAR_20, VAR_21;






                     switch (VAR_16)
                     {
                        case 128:
                           VAR_20 = 1;
                           break;

                        case 129:
                           VAR_20 = VAR_0;
                           break;

                        default:
                           FUNC_12(VAR_10, "pngpixel: unknown interlace");
                     }


                     FUNC_21(VAR_10);

                     for (VAR_21=0; VAR_21<VAR_20; ++VAR_21)
                     {
                        png_uint_32 VAR_22, VAR_23, VAR_24, VAR_25;
                        png_uint_32 VAR_26;

                        if (VAR_16 == 129)
                        {







                           if (FUNC_0(VAR_12, VAR_21) == 0)
                              continue;





                           VAR_23 = FUNC_3(VAR_21);
                           VAR_22 = FUNC_4(VAR_21);
                           VAR_25 = FUNC_1(VAR_21);
                           VAR_24 = FUNC_2(VAR_21);
                        }

                        else
                        {
                           VAR_22 = VAR_23 = 0;
                           VAR_24 = VAR_25 = 1;
                        }





                        for (VAR_26 = VAR_22; VAR_26 < VAR_13; VAR_26 += VAR_24)
                        {
                           png_uint_32 VAR_27, VAR_28;
                           FUNC_20(VAR_10, VAR_19, ((void*)0));





                           if (VAR_7 == VAR_26) for (VAR_27 = VAR_23, VAR_28 = 0;
                              VAR_27 < VAR_12; VAR_27 += VAR_25, ++VAR_28) if (VAR_6 == VAR_27)
                           {



                              FUNC_22(VAR_10, VAR_11, VAR_19, VAR_28);




                              goto pass_loop_end;
                           }
                        }
                     }


                  pass_loop_end:
                     VAR_9 = ((void*)0);
                     FUNC_13(VAR_10, VAR_19);
                  }

                  else
                     FUNC_12(VAR_10, "pngpixel: png_get_IHDR failed");

               }

               else
               {




                  if (VAR_9 != ((void*)0))
                  {





                     png_bytep VAR_29 = VAR_9;
                     VAR_9 = ((void*)0);
                     FUNC_13(VAR_10, VAR_29);
                  }
               }

               FUNC_10(VAR_10, &VAR_11);
            }

            else
               FUNC_7(VAR_2, "pngpixel: out of memory allocating png_info\n");

            FUNC_11(&VAR_10, ((void*)0), ((void*)0));
         }

         else
            FUNC_7(VAR_2, "pngpixel: out of memory allocating png_struct\n");
      }

      else
         FUNC_7(VAR_2, "pngpixel: %s: could not open file\n", VAR_4[3]);
   }

   else

      FUNC_7(VAR_2, "pngpixel: usage: pngpixel x y png-file\n");

   return VAR_5;
}

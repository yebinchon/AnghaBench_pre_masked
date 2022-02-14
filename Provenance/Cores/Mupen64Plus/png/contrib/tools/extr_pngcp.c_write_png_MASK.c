
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int options; unsigned int write_size; char* operation; int * fp; int ip; int * write_pp; scalar_t__ csp; scalar_t__ nsp; scalar_t__ tsp; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct display*) ;
 int VAR_8 ;
 int FUNC_1 (struct display*,int ,char*,...) ;
 int FUNC_2 (struct display*,char const*) ;
 int VAR_9 ;
 int FUNC_3 (struct display*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct display*,char*,int*) ;
 scalar_t__ FUNC_6 (struct display*,char*,int*) ;
 int * FUNC_7 (int ,struct display*,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int,int) ;
 int FUNC_17 (int *,struct display*,int ,int *) ;
 int FUNC_18 (int *,int ,unsigned int,int *) ;
 int FUNC_19 (struct display*) ;
 int FUNC_20 (struct display*) ;
 int FUNC_21 (struct display*) ;
 int FUNC_22 (struct display*) ;
 int FUNC_23 (struct display*,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct display*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_26(struct display *VAR_12, const char *VAR_13)
{
   FUNC_0(VAR_12);
   FUNC_2(VAR_12, VAR_13);

   VAR_12->write_pp = FUNC_7(VAR_6, VAR_12,
      VAR_8, VAR_9);

   if (VAR_12->write_pp == ((void*)0))
      FUNC_1(VAR_12, VAR_2, "failed to create write png_struct");





   FUNC_17(VAR_12->write_pp, VAR_12, VAR_11, ((void*)0) );
   FUNC_25(VAR_12);
   VAR_12->tsp = VAR_12->nsp;
   VAR_12->nsp = VAR_12->csp = 0;
   if (VAR_12->options & VAR_7)
      FUNC_19(VAR_12);
   else
      FUNC_21(VAR_12);
   FUNC_20(VAR_12);
   FUNC_22(VAR_12);

   {
      int VAR_14;


      if (FUNC_5(VAR_12, "IDAT-size", &VAR_14))
         FUNC_9(VAR_12->write_pp, VAR_14);
   }
   VAR_12->write_size = 0U;
   FUNC_23(VAR_12, VAR_3);
   FUNC_18(VAR_12->write_pp, VAR_12->ip, 0U , ((void*)0) );
   FUNC_3(VAR_12, VAR_3);


   if (VAR_12->fp != ((void*)0))
   {
      FILE *VAR_15 = VAR_12->fp;
      VAR_12->fp = ((void*)0);
      if (FUNC_4(VAR_15))
         FUNC_1(VAR_12, VAR_0, "%s: write failed (%s)",
               VAR_13 == ((void*)0) ? "stdout" : VAR_13, FUNC_24(VAR_10));
   }




   FUNC_0(VAR_12);
   VAR_12->operation = "none";
}

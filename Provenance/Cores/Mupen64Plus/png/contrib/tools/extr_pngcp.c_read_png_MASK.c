
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct display {int options; int h; scalar_t__ ct; int bpp; int size; char* operation; int * ip; int * read_pp; int w; } ;
typedef TYPE_1__* png_colorp ;
struct TYPE_5__ {int red; int green; int blue; } ;
typedef TYPE_1__ png_color ;
typedef int png_alloc_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct display*) ;
 int VAR_9 ;
 int FUNC_1 (struct display*,int ,char*) ;
 int FUNC_2 (struct display*,char const*) ;
 int VAR_10 ;
 int FUNC_3 (struct display*,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ,struct display*,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_1__**,int*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,unsigned int,int *) ;
 int FUNC_16 (int *,int *,TYPE_1__*,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int ,int *,int ) ;
 int FUNC_20 (int *,struct display*,int ) ;
 int FUNC_21 (int *,int,int) ;
 int VAR_11 ;
 int FUNC_22 (struct display*,int ) ;

__attribute__((used)) static void
FUNC_23(struct display *VAR_12, const char *VAR_13)
{
   FUNC_0(VAR_12);
   FUNC_2(VAR_12, VAR_13);

   VAR_12->read_pp = FUNC_5(VAR_8, VAR_12,
      VAR_9, VAR_10);
   if (VAR_12->read_pp == ((void*)0))
      FUNC_1(VAR_12, VAR_2, "failed to create read struct");
   VAR_12->ip = FUNC_4(VAR_12->read_pp);
   if (VAR_12->ip == ((void*)0))
      FUNC_6(VAR_12->read_pp, "failed to create info struct");


   FUNC_20(VAR_12->read_pp, VAR_12, VAR_11);
   FUNC_22(VAR_12, VAR_4);
   FUNC_15(VAR_12->read_pp, VAR_12->ip, 0U , ((void*)0) );
   FUNC_3(VAR_12, VAR_4);
   VAR_12->w = FUNC_12(VAR_12->read_pp, VAR_12->ip);
   VAR_12->h = FUNC_11(VAR_12->read_pp, VAR_12->ip);
   VAR_12->ct = FUNC_10(VAR_12->read_pp, VAR_12->ip);
   VAR_12->bpp = FUNC_8(VAR_12->read_pp, VAR_12->ip) *
             FUNC_9(VAR_12->read_pp, VAR_12->ip);
   {




      png_alloc_size_t VAR_14 = FUNC_14(VAR_12->read_pp, VAR_12->ip);

      if (VAR_14 == 0)
         FUNC_6(VAR_12->read_pp, "invalid row byte count from libpng");


      if ((VAR_3-VAR_12->h)/VAR_14 < VAR_12->h)
         FUNC_6(VAR_12->read_pp, "image too large");

      VAR_12->size = VAR_14 * VAR_12->h + VAR_12->h ;
   }
   FUNC_0(VAR_12);
   VAR_12->operation = "none";
}

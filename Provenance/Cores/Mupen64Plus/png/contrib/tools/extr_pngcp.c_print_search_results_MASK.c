
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char* filename; int best; scalar_t__ best_size; scalar_t__ read_size; scalar_t__ size; int ct; int bpp; scalar_t__ h; scalar_t__ w; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned long,unsigned long,int ,int ,unsigned long,unsigned long,unsigned long,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct display *VAR_1)
{
   FUNC_0(VAR_1->filename != ((void*)0));
   FUNC_3("%s [%ld x %ld %d bpp %s, %lu bytes] %lu -> %lu with '%s'\n",
      VAR_1->filename, (unsigned long)VAR_1->w, (unsigned long)VAR_1->h, VAR_1->bpp,
      FUNC_1(VAR_1->ct), (unsigned long)VAR_1->size, (unsigned long)VAR_1->read_size,
      (unsigned long)VAR_1->best_size, VAR_1->best);
   FUNC_2(VAR_0);
}

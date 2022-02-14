
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global {int idat_cache; scalar_t__ status_code; int skip; scalar_t__ optimize_zlib; scalar_t__ idat_max; scalar_t__ verbose; scalar_t__ quiet; scalar_t__ warnings; scalar_t__ errors; } ;


 int FUNC_0 (struct global) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct global *VAR_1)

{
   FUNC_0(*VAR_1);


   VAR_1->errors = 0;
   VAR_1->warnings = 0;
   VAR_1->quiet = 0;
   VAR_1->verbose = 0;
   VAR_1->idat_max = 0;
   VAR_1->optimize_zlib = 0;
   VAR_1->skip = VAR_0;
   VAR_1->status_code = 0;

   FUNC_1(&VAR_1->idat_cache);
}

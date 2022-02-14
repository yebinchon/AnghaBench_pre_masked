
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ dss_prec_t ;
typedef int chunk_hooks_t ;
struct TYPE_5__ {int chunks_ad_retained; int chunks_szad_retained; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,void*,size_t,size_t,int*,int*) ;
 void* FUNC_2 (size_t,size_t,int*,int*) ;
 void* FUNC_3 (TYPE_1__*,int *,int *,int *,int,void*,size_t,size_t,int*,int*,int) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void *
FUNC_4(arena_t *VAR_5, void *VAR_6, size_t VAR_7, size_t VAR_8,
    bool *VAR_9, bool *VAR_10, dss_prec_t VAR_11)
{
 void *VAR_12;
 chunk_hooks_t VAR_13 = VAR_0;

 FUNC_0(VAR_7 != 0);
 FUNC_0((VAR_7 & VAR_1) == 0);
 FUNC_0(VAR_8 != 0);
 FUNC_0((VAR_8 & VAR_1) == 0);


 if ((VAR_12 = FUNC_3(VAR_5, &VAR_13,
     &VAR_5->chunks_szad_retained, &VAR_5->chunks_ad_retained, 0,
     VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 1)) != ((void*)0))
  return (VAR_12);


 if (VAR_4 && VAR_11 == VAR_2 && (VAR_12 =
     FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10)) !=
     ((void*)0))
  return (VAR_12);




 if (VAR_6 == ((void*)0) && (VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9,
     VAR_10)) != ((void*)0))
  return (VAR_12);

 if (VAR_4 && VAR_11 == VAR_3 && (VAR_12 =
     FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10)) !=
     ((void*)0))
  return (VAR_12);


 return (((void*)0));
}

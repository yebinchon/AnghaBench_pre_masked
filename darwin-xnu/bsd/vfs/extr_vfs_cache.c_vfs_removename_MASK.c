
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct stringhead {TYPE_2__* lh_first; } ;
struct TYPE_5__ {TYPE_2__* le_next; } ;
struct TYPE_6__ {char const* str; scalar_t__ refcount; TYPE_1__ hash_chain; } ;
typedef TYPE_2__ string_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_5 ;
 struct stringhead* VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;

int
FUNC_8(const char *VAR_9)
{
 struct stringhead *VAR_10;
 string_t *VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
        uint32_t VAR_14;
 int VAR_15 = VAR_0;

 VAR_12 = FUNC_3(VAR_9, 0);






 FUNC_7(VAR_8);





 VAR_13 = VAR_12 & VAR_7;
 VAR_14 = VAR_13 % VAR_2;

 VAR_10 = &VAR_6[VAR_13];

 FUNC_4(&VAR_5[VAR_14]);

 for (VAR_11 = VAR_10->lh_first; VAR_11 != ((void*)0); VAR_11 = VAR_11->hash_chain.le_next) {
  if (VAR_11->str == VAR_9) {
   VAR_11->refcount--;

   if (VAR_11->refcount == 0) {
    FUNC_1(VAR_11, VAR_4);

    if (VAR_10->lh_first == ((void*)0)) {
     FUNC_2(-1, &VAR_3);
    }
   } else {
    VAR_11 = ((void*)0);
   }
   VAR_15 = 0;
   break;
  }
 }
 FUNC_5(&VAR_5[VAR_14]);
 FUNC_6(VAR_8);

 if (VAR_11 != ((void*)0))
  FUNC_0(VAR_11, VAR_1);

 return VAR_15;
}

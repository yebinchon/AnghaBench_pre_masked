
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t u_long ;
struct stringhead {TYPE_2__* lh_first; } ;
struct TYPE_4__ {TYPE_2__* le_next; } ;
struct TYPE_5__ {TYPE_1__ hash_chain; scalar_t__ str; } ;
typedef TYPE_2__ string_t ;


 int FUNC_0 (struct stringhead*,int ) ;
 int FUNC_1 (struct stringhead*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (char const*,int ) ;
 struct stringhead* FUNC_3 (int,int ,size_t*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 struct stringhead* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct stringhead *VAR_6;
 struct stringhead *VAR_7;
 struct stringhead *VAR_8, *VAR_9;
 string_t *VAR_10, *VAR_11;
 uint32_t VAR_12, VAR_13;
 u_long VAR_14, VAR_15;
 FUNC_5(VAR_5);

 if (4 * VAR_1 < ((VAR_4 + 1) * 3)) {
  FUNC_4(VAR_5);
  return;
 }
 VAR_6 = FUNC_3((VAR_4 + 1) * 2, VAR_0, &VAR_14);

 if (VAR_6 == ((void*)0)) {
  FUNC_6("failed to resize the hash table.\n");
  FUNC_4(VAR_5);
  return;
 }


 VAR_7 = VAR_3;
 VAR_3 = VAR_6;
 VAR_15 = VAR_4;
 VAR_4 = VAR_14;
 VAR_1 = 0;




 for (VAR_12 = 0; VAR_12 <= VAR_15; VAR_12++) {
  VAR_8 = &VAR_7[VAR_12];
  for (VAR_10 = VAR_8->lh_first; VAR_10 != ((void*)0); VAR_10 = VAR_11) {
   VAR_13 = FUNC_2((const char *)VAR_10->str, 0);
   VAR_9 = &VAR_3[VAR_13 & VAR_4];
   if (VAR_9->lh_first == ((void*)0)) {
    VAR_1++;
   }
   VAR_11 = VAR_10->hash_chain.le_next;
   FUNC_1(VAR_9, VAR_10, VAR_2);
  }
 }
 FUNC_4(VAR_5);

 FUNC_0(VAR_7, VAR_0);
}

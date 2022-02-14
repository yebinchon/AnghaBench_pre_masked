
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef int vm_map_offset_t ;
struct pmap {int dummy; } ;
typedef int pmap_flush_context ;
typedef int chunk_state_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ vo_shadow_offset; struct TYPE_8__* shadow; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ,int ,int *,int *,struct pmap*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static vm_object_size_t
FUNC_8(
 vm_object_t VAR_2,
 vm_object_offset_t VAR_3,
 vm_object_size_t VAR_4,
 boolean_t VAR_5,
 boolean_t VAR_6,
 boolean_t VAR_7,
 pmap_flush_context *VAR_8,
 struct pmap *VAR_9,
 vm_map_offset_t VAR_10)
{
 vm_object_t VAR_11;
 vm_object_t VAR_12;
 vm_object_size_t VAR_13;
 chunk_state_t VAR_14;







 VAR_13 = FUNC_2(VAR_4, VAR_0);







 FUNC_0(VAR_14, VAR_13);
 VAR_11 = VAR_2;







 while (VAR_11 && FUNC_1(VAR_14)) {
  FUNC_5(VAR_11);

  FUNC_3(VAR_11, VAR_3, VAR_13, VAR_5, VAR_6, VAR_7, &VAR_14, VAR_8, VAR_9, VAR_10);

  FUNC_6(VAR_11);







  VAR_12 = VAR_11->shadow;

  if (VAR_12) {
   VAR_5 = VAR_1;
   VAR_6 = VAR_1;
   VAR_7 = VAR_1;
          VAR_3 += VAR_11->vo_shadow_offset;
          FUNC_4(VAR_12);
  }

  if (VAR_11 != VAR_2)
          FUNC_7(VAR_11);

  VAR_11 = VAR_12;
 }

 if (VAR_11 && VAR_11 != VAR_2)
         FUNC_7(VAR_11);

 return VAR_13;
}

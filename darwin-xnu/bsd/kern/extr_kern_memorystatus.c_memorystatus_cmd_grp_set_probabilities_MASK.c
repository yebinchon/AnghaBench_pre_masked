
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {scalar_t__ version; int use_probability; int proc_name; } ;
typedef TYPE_1__ memorystatus_properties_entry_v1_t ;
typedef TYPE_1__ memorystatus_internal_probabilities_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,size_t,size_t,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__,TYPE_1__*,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 size_t VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_5 (TYPE_1__*,int ,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(user_addr_t VAR_13, size_t VAR_14)
{
 int VAR_15 = 0;
 memorystatus_properties_entry_v1_t *VAR_16 = ((void*)0);
 uint32_t VAR_17 = 0, VAR_18 = 0;
 memorystatus_internal_probabilities_t *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 size_t VAR_21 = 0, VAR_22 = 0;


 if ((VAR_13 == VAR_10) || (VAR_14 == 0)) {
  VAR_15 = VAR_4;
  goto out;
 }

 VAR_17 = (VAR_14 / sizeof(memorystatus_properties_entry_v1_t));

 if ((VAR_16 = (memorystatus_properties_entry_v1_t *) FUNC_3(VAR_14)) == ((void*)0)) {
  VAR_15 = VAR_5;
  goto out;
 }

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_3, VAR_7, VAR_17, 0, 0, 0);

 if ((VAR_15 = FUNC_2(VAR_13, VAR_16, VAR_14)) != 0) {
  goto out;
 }

 if (VAR_16[0].version == VAR_8) {
  if ((VAR_14 % VAR_9) != 0) {
   VAR_15 = VAR_4;
   goto out;
  }
 } else {
  VAR_15 = VAR_4;
  goto out;
 }


 for (VAR_18=0; VAR_18 < VAR_17; VAR_18++) {
  if (VAR_16[VAR_18].use_probability > 1) {
   VAR_15 = VAR_4;
   goto out;
  }
 }

 VAR_21 = sizeof(memorystatus_internal_probabilities_t) * VAR_17;

 if ( (VAR_19 = (memorystatus_internal_probabilities_t *) FUNC_3(VAR_21)) == ((void*)0)) {
  VAR_15 = VAR_5;
  goto out;
 }
 FUNC_5(VAR_19, 0, VAR_21);

 FUNC_6();

 if (VAR_12) {
  VAR_20 = VAR_12;
  VAR_22 = VAR_11;
 }

 VAR_12 = VAR_19;
 VAR_11 = VAR_21;
 VAR_19 = ((void*)0);

 for (VAR_18=0; VAR_18 < VAR_17; VAR_18++ ) {

  FUNC_8(VAR_12[VAR_18].proc_name, VAR_16[VAR_18].proc_name, VAR_6 + 1);
  VAR_12[VAR_18].use_probability = VAR_16[VAR_18].use_probability;
 }

 FUNC_7();

out:
 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2, VAR_7, VAR_17, VAR_21, 0, 0);

 if (VAR_16) {
  FUNC_4(VAR_16, VAR_14);
  VAR_16 = ((void*)0);
 }

 if (VAR_20) {
  FUNC_4(VAR_20, VAR_22);
  VAR_20 = ((void*)0);
 }

 return (VAR_15);

}

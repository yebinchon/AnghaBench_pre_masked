
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee1394_device_id {int vendor_id; int model_id; int specifier_id; int version; } ;
struct fw_csr_iterator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fw_csr_iterator*,int*) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;

__attribute__((used)) static int FUNC_2(u32 *VAR_8, u32 VAR_9,
    const struct ieee1394_device_id *VAR_10)
{
 struct fw_csr_iterator VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_14 = 0;
 FUNC_0(&VAR_11, VAR_8);
 while (FUNC_1(&VAR_11, &VAR_12, &VAR_13)) {
  if (VAR_12 == VAR_2 && VAR_13 == VAR_10->vendor_id)
   VAR_14 |= VAR_6;
  if (VAR_12 == VAR_0 && VAR_13 == VAR_10->model_id)
   VAR_14 |= VAR_4;
  if (VAR_12 == VAR_1 && VAR_13 == VAR_10->specifier_id)
   VAR_14 |= VAR_5;
  if (VAR_12 == VAR_3 && VAR_13 == VAR_10->version)
   VAR_14 |= VAR_7;
 }

 return (VAR_14 & VAR_9) == VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct loop_info64 {int lo_encrypt_key_size; int lo_encrypt_type; scalar_t__ lo_offset; scalar_t__ lo_sizelimit; int lo_flags; int lo_encrypt_key; int * lo_init; int lo_crypt_name; int lo_file_name; } ;
struct loop_func_table {int ioctl; int transfer; } ;
struct loop_device {int lo_encrypt_key_size; scalar_t__ lo_key_owner; scalar_t__ lo_state; scalar_t__ lo_offset; scalar_t__ lo_sizelimit; int lo_flags; scalar_t__* lo_encrypt_key; int * lo_init; int ioctl; int transfer; scalar_t__* lo_crypt_name; scalar_t__* lo_file_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct loop_device*) ;
 int FUNC_3 (struct loop_device*) ;
 int FUNC_4 (struct loop_device*,struct loop_func_table*,struct loop_info64 const*) ;
 int FUNC_5 (struct loop_device*) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 struct loop_func_table VAR_10 ;
 struct loop_func_table** VAR_11 ;

__attribute__((used)) static int
FUNC_7(struct loop_device *VAR_12, const struct loop_info64 *VAR_13)
{
 int VAR_14;
 struct loop_func_table *VAR_15;
 uid_t VAR_16 = FUNC_1();

 if (VAR_12->lo_encrypt_key_size &&
     VAR_12->lo_key_owner != VAR_16 &&
     !FUNC_0(VAR_0))
  return -VAR_4;
 if (VAR_12->lo_state != VAR_8)
  return -VAR_3;
 if ((unsigned int) VAR_13->lo_encrypt_key_size > VAR_6)
  return -VAR_2;

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_13->lo_encrypt_type) {
  unsigned int VAR_17 = VAR_13->lo_encrypt_type;

  if (VAR_17 >= VAR_9)
   return -VAR_2;
  VAR_15 = VAR_11[VAR_17];
  if (VAR_15 == ((void*)0))
   return -VAR_2;
 } else
  VAR_15 = ((void*)0);

 VAR_14 = FUNC_4(VAR_12, VAR_15, VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->lo_offset != VAR_13->lo_offset ||
     VAR_12->lo_sizelimit != VAR_13->lo_sizelimit) {
  VAR_12->lo_offset = VAR_13->lo_offset;
  VAR_12->lo_sizelimit = VAR_13->lo_sizelimit;
  if (FUNC_2(VAR_12))
   return -VAR_1;
 }
 FUNC_3(VAR_12);

 FUNC_6(VAR_12->lo_file_name, VAR_13->lo_file_name, VAR_7);
 FUNC_6(VAR_12->lo_crypt_name, VAR_13->lo_crypt_name, VAR_7);
 VAR_12->lo_file_name[VAR_7-1] = 0;
 VAR_12->lo_crypt_name[VAR_7-1] = 0;

 if (!VAR_15)
  VAR_15 = &VAR_10;
 VAR_12->transfer = VAR_15->transfer;
 VAR_12->ioctl = VAR_15->ioctl;

 if ((VAR_12->lo_flags & VAR_5) !=
      (VAR_13->lo_flags & VAR_5))
  VAR_12->lo_flags ^= VAR_5;

 VAR_12->lo_encrypt_key_size = VAR_13->lo_encrypt_key_size;
 VAR_12->lo_init[0] = VAR_13->lo_init[0];
 VAR_12->lo_init[1] = VAR_13->lo_init[1];
 if (VAR_13->lo_encrypt_key_size) {
  FUNC_6(VAR_12->lo_encrypt_key, VAR_13->lo_encrypt_key,
         VAR_13->lo_encrypt_key_size);
  VAR_12->lo_key_owner = VAR_16;
 }

 return 0;
}

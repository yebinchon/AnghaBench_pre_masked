
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_info64 {scalar_t__ lo_device; scalar_t__ lo_inode; scalar_t__ lo_rdevice; scalar_t__ lo_offset; scalar_t__ lo_encrypt_type; int lo_encrypt_key; int lo_file_name; int lo_crypt_name; int * lo_init; int lo_flags; int lo_encrypt_key_size; int lo_number; } ;
struct loop_info {scalar_t__ lo_device; scalar_t__ lo_inode; scalar_t__ lo_rdevice; scalar_t__ lo_offset; scalar_t__ lo_encrypt_type; int lo_encrypt_key; int lo_name; int * lo_init; int lo_flags; int lo_encrypt_key_size; int lo_number; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct loop_info*,int ,int) ;

__attribute__((used)) static int
FUNC_2(const struct loop_info64 *VAR_4, struct loop_info *VAR_5)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->lo_number = VAR_4->lo_number;
 VAR_5->lo_device = VAR_4->lo_device;
 VAR_5->lo_inode = VAR_4->lo_inode;
 VAR_5->lo_rdevice = VAR_4->lo_rdevice;
 VAR_5->lo_offset = VAR_4->lo_offset;
 VAR_5->lo_encrypt_type = VAR_4->lo_encrypt_type;
 VAR_5->lo_encrypt_key_size = VAR_4->lo_encrypt_key_size;
 VAR_5->lo_flags = VAR_4->lo_flags;
 VAR_5->lo_init[0] = VAR_4->lo_init[0];
 VAR_5->lo_init[1] = VAR_4->lo_init[1];
 if (VAR_5->lo_encrypt_type == VAR_1)
  FUNC_0(VAR_5->lo_name, VAR_4->lo_crypt_name, VAR_3);
 else
  FUNC_0(VAR_5->lo_name, VAR_4->lo_file_name, VAR_3);
 FUNC_0(VAR_5->lo_encrypt_key, VAR_4->lo_encrypt_key, VAR_2);


 if (VAR_5->lo_device != VAR_4->lo_device ||
     VAR_5->lo_rdevice != VAR_4->lo_rdevice ||
     VAR_5->lo_inode != VAR_4->lo_inode ||
     VAR_5->lo_offset != VAR_4->lo_offset)
  return -VAR_0;

 return 0;
}

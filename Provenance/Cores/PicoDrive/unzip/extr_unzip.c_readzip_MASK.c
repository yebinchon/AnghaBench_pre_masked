
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zipent {int filename_length; scalar_t__ extra_field_length; scalar_t__ file_comment_length; char* name; void* offset_lcl_hdr_frm_frst_disk; void* external_file_attrib; void* internal_file_attrib; void* disk_number_start; void* uncompressed_size; void* compressed_size; void* crc32; void* last_mod_file_date; void* last_mod_file_time; void* compression_method; void* general_purpose_bit_flag; int os_needed_to_extract; int version_needed_to_extract; int host_os; int version_made_by; void* cent_file_header_sig; } ;
struct TYPE_3__ {scalar_t__ cd_pos; scalar_t__ size_of_cent_dir; struct zipent ent; int * cd; int zip; } ;
typedef TYPE_1__ ZIP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int *,int) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;

struct zipent* FUNC_6(ZIP* VAR_21) {


 if (VAR_21->cd_pos >= VAR_21->size_of_cent_dir)
  return 0;


 VAR_21->ent.cent_file_header_sig = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_4);
 VAR_21->ent.version_made_by = *(VAR_21->cd+VAR_21->cd_pos+VAR_14);
 VAR_21->ent.host_os = *(VAR_21->cd+VAR_21->cd_pos+VAR_10);
 VAR_21->ent.version_needed_to_extract = *(VAR_21->cd+VAR_21->cd_pos+VAR_15);
 VAR_21->ent.os_needed_to_extract = *(VAR_21->cd+VAR_21->cd_pos+VAR_5);
 VAR_21->ent.general_purpose_bit_flag = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_6);
 VAR_21->ent.compression_method = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_9);
 VAR_21->ent.last_mod_file_time = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_12);
 VAR_21->ent.last_mod_file_date = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_3);
 VAR_21->ent.crc32 = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_2);
 VAR_21->ent.compressed_size = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_11);
 VAR_21->ent.uncompressed_size = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_13);
 VAR_21->ent.filename_length = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_8);
 VAR_21->ent.extra_field_length = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_16);
 VAR_21->ent.file_comment_length = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_1);
 VAR_21->ent.disk_number_start = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_17);
 VAR_21->ent.internal_file_attrib = FUNC_5 (VAR_21->cd+VAR_21->cd_pos+VAR_19);
 VAR_21->ent.external_file_attrib = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_18);
 VAR_21->ent.offset_lcl_hdr_frm_frst_disk = FUNC_4 (VAR_21->cd+VAR_21->cd_pos+VAR_20);



    if (VAR_21->cd_pos + VAR_7 + VAR_21->ent.filename_length > VAR_21->size_of_cent_dir)
    {
        FUNC_0("Invalid filename length in directory", VAR_0,VAR_21->zip);
        return 0;
    }


 FUNC_1(VAR_21->ent.name);
 VAR_21->ent.name = (char*)FUNC_2(VAR_21->ent.filename_length + 1);
 FUNC_3(VAR_21->ent.name, VAR_21->cd+VAR_21->cd_pos+VAR_7, VAR_21->ent.filename_length);
 VAR_21->ent.name[VAR_21->ent.filename_length] = 0;


 VAR_21->cd_pos += VAR_7 + VAR_21->ent.filename_length + VAR_21->ent.extra_field_length + VAR_21->ent.file_comment_length;

 return &VAR_21->ent;
}

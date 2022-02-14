
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int total_uncompressed_pages_in_compressor; int compressor_page_count; int decompressions; int compressions; int internal_page_count; int external_page_count; int speculative_count; int wire_count; int purgeable_count; int throttled_count; int inactive_count; int active_count; int free_count; } ;
typedef TYPE_1__ vm_statistics64_data_t ;
struct TYPE_7__ {int largest_zone_size; int largest_zone_name; int zone_map_capacity; int zone_map_size; int total_uncompressed_pages_in_compressor; int compressor_pages; int decompressions; int compressions; int anonymous_pages; int filebacked_pages; int speculative_pages; int wired_pages; int purgeable_pages; int throttled_pages; int inactive_pages; int active_pages; int free_pages; } ;
struct TYPE_6__ {TYPE_3__ stats; } ;
typedef TYPE_2__ memorystatus_jetsam_snapshot_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int host_info64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(memorystatus_jetsam_snapshot_t *VAR_3)
{
 kern_return_t VAR_4 = VAR_2;
 mach_msg_type_number_t VAR_5 = VAR_1;
 vm_statistics64_data_t VAR_6;

 if ((VAR_4 = FUNC_3(FUNC_2(), VAR_0, (host_info64_t)&VAR_6, &VAR_5)) != VAR_2) {
  FUNC_5("memorystatus_init_jetsam_snapshot_stats: host_statistics64 failed with %d\n", VAR_4);
  FUNC_4(&VAR_3->stats, 0, sizeof(VAR_3->stats));
 } else {
  VAR_3->stats.free_pages = VAR_6.free_count;
  VAR_3->stats.active_pages = VAR_6.active_count;
  VAR_3->stats.inactive_pages = VAR_6.inactive_count;
  VAR_3->stats.throttled_pages = VAR_6.throttled_count;
  VAR_3->stats.purgeable_pages = VAR_6.purgeable_count;
  VAR_3->stats.wired_pages = VAR_6.wire_count;

  VAR_3->stats.speculative_pages = VAR_6.speculative_count;
  VAR_3->stats.filebacked_pages = VAR_6.external_page_count;
  VAR_3->stats.anonymous_pages = VAR_6.internal_page_count;
  VAR_3->stats.compressions = VAR_6.compressions;
  VAR_3->stats.decompressions = VAR_6.decompressions;
  VAR_3->stats.compressor_pages = VAR_6.compressor_page_count;
  VAR_3->stats.total_uncompressed_pages_in_compressor = VAR_6.total_uncompressed_pages_in_compressor;
 }

 FUNC_1(&VAR_3->stats.zone_map_size, &VAR_3->stats.zone_map_capacity);
 FUNC_0(VAR_3->stats.largest_zone_name, sizeof(VAR_3->stats.largest_zone_name),
   &VAR_3->stats.largest_zone_size);
}

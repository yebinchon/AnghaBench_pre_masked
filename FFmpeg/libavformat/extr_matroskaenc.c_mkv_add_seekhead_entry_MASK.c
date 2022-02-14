
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ segmentpos; int elementid; } ;
typedef TYPE_1__ mkv_seekhead_entry ;
struct TYPE_7__ {scalar_t__ max_entries; scalar_t__ num_entries; scalar_t__ segment_offset; TYPE_1__* entries; } ;
typedef TYPE_2__ mkv_seekhead ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(mkv_seekhead *VAR_1, uint32_t VAR_2, uint64_t VAR_3)
{
    mkv_seekhead_entry *VAR_4 = VAR_1->entries;


    if (VAR_1->max_entries > 0 && VAR_1->max_entries <= VAR_1->num_entries)
        return -1;

    VAR_4 = FUNC_1(VAR_4, VAR_1->num_entries + 1, sizeof(mkv_seekhead_entry));
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_1->entries = VAR_4;

    VAR_1->entries[VAR_1->num_entries].elementid = VAR_2;
    VAR_1->entries[VAR_1->num_entries++].segmentpos = VAR_3 - VAR_1->segment_offset;

    return 0;
}

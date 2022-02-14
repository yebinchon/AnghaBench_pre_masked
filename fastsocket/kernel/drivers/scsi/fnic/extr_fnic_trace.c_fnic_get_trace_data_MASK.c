
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int val; int low; } ;
struct TYPE_7__ {int val; int low; } ;
struct TYPE_9__ {int * data; int tag; int host_no; TYPE_2__ timestamp; TYPE_1__ fnaddr; } ;
typedef TYPE_3__ fnic_trace_data_t ;
struct TYPE_10__ {scalar_t__ buffer; } ;
typedef TYPE_4__ fnic_dbgfs_t ;
struct TYPE_11__ {int rd_idx; int wr_idx; scalar_t__* page_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,char*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,int ) ;
 int VAR_5 ;

int FUNC_5(fnic_dbgfs_t *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10;
 char VAR_11[VAR_0];
 struct timespec VAR_12;
 fnic_trace_data_t *VAR_13;

 FUNC_2(&VAR_4, VAR_10);
 VAR_7 = VAR_3.rd_idx;
 VAR_8 = VAR_3.wr_idx;
 if (VAR_8 < VAR_7) {
  while (1) {

   VAR_13 = (fnic_trace_data_t *)
      VAR_3.page_offset[VAR_7];
   if (!VAR_13) {
    FUNC_3(&VAR_4, VAR_10);
    return 0;
   }

   if (sizeof(unsigned long) < 8) {
    FUNC_4(VAR_11, VAR_13->fnaddr.low);
    FUNC_0(VAR_13->timestamp.low, &VAR_12);
   } else {
    FUNC_4(VAR_11, VAR_13->fnaddr.val);
    FUNC_0(VAR_13->timestamp.val, &VAR_12);
   }




   VAR_9 += FUNC_1(VAR_6->buffer + VAR_9,
      (VAR_5 * VAR_1 * 3) - VAR_9,
      "%16lu.%16lu %-50s %8x %8x %16llx %16llx "
      "%16llx %16llx %16llx\n", VAR_12.tv_sec,
      VAR_12.tv_nsec, VAR_11, VAR_13->host_no, VAR_13->tag,
      VAR_13->data[0], VAR_13->data[1], VAR_13->data[2],
      VAR_13->data[3], VAR_13->data[4]);
   VAR_7++;




   if (VAR_7 > (VAR_2-1))
    VAR_7 = 0;




   if (VAR_7 == VAR_8)
    break;
  }
 } else if (VAR_8 > VAR_7) {
  while (1) {

   VAR_13 = (fnic_trace_data_t *)
      VAR_3.page_offset[VAR_7];
   if (!VAR_13) {
    FUNC_3(&VAR_4, VAR_10);
    return 0;
   }

   if (sizeof(unsigned long) < 8) {
    FUNC_4(VAR_11, VAR_13->fnaddr.low);
    FUNC_0(VAR_13->timestamp.low, &VAR_12);
   } else {
    FUNC_4(VAR_11, VAR_13->fnaddr.val);
    FUNC_0(VAR_13->timestamp.val, &VAR_12);
   }




   VAR_9 += FUNC_1(VAR_6->buffer + VAR_9,
      (VAR_5 * VAR_1 * 3) - VAR_9,
      "%16lu.%16lu %-50s %8x %8x %16llx %16llx "
      "%16llx %16llx %16llx\n", VAR_12.tv_sec,
      VAR_12.tv_nsec, VAR_11, VAR_13->host_no, VAR_13->tag,
      VAR_13->data[0], VAR_13->data[1], VAR_13->data[2],
      VAR_13->data[3], VAR_13->data[4]);
   VAR_7++;




   if (VAR_7 == VAR_8)
    break;
  }
 }
 FUNC_3(&VAR_4, VAR_10);
 return VAR_9;
}

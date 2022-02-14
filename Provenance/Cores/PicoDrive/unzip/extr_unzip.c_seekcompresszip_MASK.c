
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zipent {long offset_lcl_hdr_frm_frst_disk; } ;
struct TYPE_4__ {int zip; int fp; } ;
typedef TYPE_1__ ZIP ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,long,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(ZIP* VAR_5, struct zipent* VAR_6) {
 char VAR_7[VAR_3];
 long VAR_8;

 if (!VAR_5->fp) {
  if (!FUNC_4(VAR_5))
   return -1;
 }

 if (FUNC_2(VAR_5->fp, VAR_6->offset_lcl_hdr_frm_frst_disk, VAR_1)!=0) {
  FUNC_0 ("Seeking to header", VAR_0, VAR_5->zip);
  return -1;
 }

 if (FUNC_1(VAR_7, VAR_3, 1, VAR_5->fp)!=1) {
  FUNC_0 ("Reading header", VAR_0, VAR_5->zip);
  return -1;
 }

 {
  UINT16 VAR_9 = FUNC_3 (VAR_7+VAR_2);
  UINT16 VAR_10 = FUNC_3 (VAR_7+VAR_4);


  VAR_8 = VAR_6->offset_lcl_hdr_frm_frst_disk + VAR_3 + VAR_9 + VAR_10;

  if (FUNC_2(VAR_5->fp, VAR_8, VAR_1) != 0) {
   FUNC_0 ("Seeking to compressed data", VAR_0, VAR_5->zip);
   return -1;
  }

 }

 return 0;
}

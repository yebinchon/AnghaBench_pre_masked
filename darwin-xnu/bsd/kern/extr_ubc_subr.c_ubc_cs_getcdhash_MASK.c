
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct cs_blob {scalar_t__ csb_base_offset; scalar_t__ csb_start_offset; scalar_t__ csb_end_offset; int csb_cdhash; struct cs_blob* csb_next; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 struct cs_blob* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(
 vnode_t VAR_1,
 off_t VAR_2,
 unsigned char *VAR_3)
{
 struct cs_blob *VAR_4, *VAR_5;
 off_t VAR_6;
 int VAR_7;

 FUNC_2(VAR_1);

 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = VAR_4;
      VAR_5 != ((void*)0);
      VAR_5 = VAR_5->csb_next) {

  VAR_6 = VAR_2 - VAR_5->csb_base_offset;
  if (VAR_6 >= VAR_5->csb_start_offset &&
      VAR_6 < VAR_5->csb_end_offset) {

   break;
  }
 }

 if (VAR_5 == ((void*)0)) {

  VAR_7 = VAR_0;
 } else {

  FUNC_0(VAR_5->csb_cdhash, VAR_3, sizeof (VAR_5->csb_cdhash));
  VAR_7 = 0;
 }

 FUNC_3(VAR_1);

 return VAR_7;
}

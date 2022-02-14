
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int commpage_descriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int ** VAR_11 ;
 int ** VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (char*,scalar_t__,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5( void ){
 commpage_descriptor **VAR_17;

 VAR_16 = 0;
 VAR_8 = (char *) FUNC_0(VAR_13, (vm_size_t) VAR_3, VAR_2 | VAR_1);
 VAR_9 = VAR_8;

 char *VAR_18 = VAR_8;
 int VAR_19=0;
 for(; VAR_19< VAR_3; VAR_19++){
  VAR_18[VAR_19]=0xCC;
 }

 VAR_7 = VAR_5;
 for (VAR_17 = VAR_11; *VAR_17 != ((void*)0); VAR_17++) {
  FUNC_1(*VAR_17);
 }






 if (VAR_6 & VAR_15) {
  VAR_16 = 0;
  VAR_8 = (char *) FUNC_0(VAR_14, (vm_size_t) VAR_3, VAR_2 | VAR_1);
  VAR_10 = VAR_8;

  VAR_18=VAR_8;
  for(VAR_19=0; VAR_19<VAR_3; VAR_19++){
   VAR_18[VAR_19]=0xCC;
  }

  for (VAR_17 = VAR_12; *VAR_17 !=((void*)0); VAR_17++) {
   FUNC_1(*VAR_17);
  }





 }

 if (VAR_16 > VAR_4)
  FUNC_2("commpage text overflow: next=0x%08x, commPagePtr=%p", VAR_16, VAR_8);

}

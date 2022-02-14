
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct image_params {char* ip_vdata; int ip_flags; scalar_t__ ip_origcputype; int ip_interp_sugid_fd; char* ip_interp_buffer; scalar_t__ ip_vp; int ip_vfs_context; TYPE_1__* ip_origvattr; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
typedef int proc_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {scalar_t__ fg_data; int * fg_ops; int fg_flag; } ;
struct TYPE_3__ {int va_mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct image_params*) ;
 int FUNC_4 (struct image_params*,int ,int ,int *) ;
 int FUNC_5 (int ,struct fileproc**,int*,int ) ;
 int FUNC_6 (int ,int,struct fileproc*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_12(struct image_params *VAR_9)
{
 char *VAR_10 = VAR_9->ip_vdata;
 char *VAR_11;
 char *VAR_12, *VAR_13;
 char *VAR_14;





 if (VAR_10[0] != '#' ||
     VAR_10[1] != '!' ||
     (VAR_9->ip_flags & VAR_2) != 0) {
  return (-1);
 }

 if (VAR_9->ip_origcputype != 0) {

  return (-1);
 }

 VAR_9->ip_flags |= VAR_2;
 VAR_9->ip_interp_sugid_fd = -1;
 VAR_9->ip_interp_buffer[0] = '\0';





 if (VAR_7 == 0) {
  VAR_9->ip_origvattr->va_mode &= ~(VAR_6 | VAR_5);
 }


 for( VAR_11 = &VAR_10[2]; VAR_11 < &VAR_10[VAR_3]; VAR_11++ ) {
  if (FUNC_1(*VAR_11)) {

   return (VAR_0);
  } else if (FUNC_2(*VAR_11)) {

  } else {

   break;
  }
 }

 if (VAR_11 == &VAR_10[VAR_3]) {

  return (VAR_0);
 }

 VAR_12 = VAR_11;


 for ( ; VAR_11 < &VAR_10[VAR_3]; VAR_11++ ) {
  if (FUNC_1(*VAR_11)) {

   break;
  } else {

  }
 }

 if (VAR_11 == &VAR_10[VAR_3]) {

  return (VAR_0);
 }


 while (FUNC_1(*VAR_11) || FUNC_2(*VAR_11)) {
  VAR_11--;
 }


 VAR_13 = VAR_11 + 1;
 VAR_14 = VAR_9->ip_interp_buffer;
 for ( VAR_11 = VAR_12; (VAR_11 < VAR_13) && !FUNC_2(*VAR_11); VAR_11++)
  *VAR_14++ = *VAR_11;
 *VAR_14 = '\0';

 FUNC_3(VAR_9);
 FUNC_4(VAR_9, FUNC_0(VAR_9->ip_interp_buffer),
       VAR_4, ((void*)0));


 VAR_14 = VAR_9->ip_interp_buffer;
 for ( VAR_11 = VAR_12; (VAR_11 < VAR_13); VAR_11++)
  *VAR_14++ = *VAR_11;
 *VAR_14 = '\0';







 if (VAR_9->ip_origvattr->va_mode & (VAR_6 | VAR_5)) {
  proc_t VAR_15;
  struct fileproc *VAR_16;
  int VAR_17;
  int VAR_18;

  VAR_15 = FUNC_10(VAR_9->ip_vfs_context);
  VAR_18 = FUNC_5(VAR_15, &VAR_16, &VAR_17, VAR_9->ip_vfs_context);
  if (VAR_18)
   return(VAR_18);

  VAR_16->f_fglob->fg_flag = VAR_1;
  VAR_16->f_fglob->fg_ops = &VAR_8;
  VAR_16->f_fglob->fg_data = (caddr_t)VAR_9->ip_vp;

  FUNC_7(VAR_15);
  FUNC_9(VAR_15, VAR_17, ((void*)0));
  FUNC_6(VAR_15, VAR_17, VAR_16, 1);
  FUNC_8(VAR_15);
  FUNC_11(VAR_9->ip_vp);

  VAR_9->ip_interp_sugid_fd = VAR_17;
 }


 return (-3);
}

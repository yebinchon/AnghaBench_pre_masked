
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {struct nfs4_state* state; } ;
struct nfs4_state {int dummy; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; int fl_type; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long VAR_9 ;
 int FUNC_3 (struct nfs4_state*,int ,struct file_lock*) ;
 int FUNC_4 (struct nfs4_state*,int,struct file_lock*) ;
 int FUNC_5 (struct nfs4_state*,int,struct file_lock*) ;
 unsigned long FUNC_6 (unsigned long) ;
 struct nfs_open_context* FUNC_7 (struct file*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_10, int VAR_11, struct file_lock *VAR_12)
{
 struct nfs_open_context *VAR_13;
 struct nfs4_state *VAR_14;
 unsigned long VAR_15 = VAR_9;
 int VAR_16;


 VAR_13 = FUNC_7(VAR_10);
 VAR_14 = VAR_13->state;

 if (VAR_12->fl_start < 0 || VAR_12->fl_end < 0)
  return -VAR_2;

 if (FUNC_0(VAR_11)) {
  if (VAR_14 != ((void*)0))
   return FUNC_3(VAR_14, VAR_7, VAR_12);
  return 0;
 }

 if (!(FUNC_1(VAR_11) || FUNC_2(VAR_11)))
  return -VAR_2;

 if (VAR_12->fl_type == VAR_8) {
  if (VAR_14 != ((void*)0))
   return FUNC_5(VAR_14, VAR_11, VAR_12);
  return 0;
 }

 if (VAR_14 == ((void*)0))
  return -VAR_3;




 switch (VAR_12->fl_type & (129|128|VAR_8)) {
 case 129:
  if (!(VAR_10->f_mode & VAR_5))
   return -VAR_1;
  break;
 case 128:
  if (!(VAR_10->f_mode & VAR_6))
   return -VAR_1;
 }

 do {
  VAR_16 = FUNC_4(VAR_14, VAR_11, VAR_12);
  if ((VAR_16 != -VAR_0) || FUNC_1(VAR_11))
   break;
  VAR_15 = FUNC_6(VAR_15);
  VAR_16 = -VAR_4;
  if (FUNC_8())
   break;
 } while(VAR_16 < 0);
 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tid_t ;
struct tblock {int xflag; } ;
struct inode {int i_mode; scalar_t__ i_size; } ;
typedef int s64 ;
struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {TYPE_1__ acl; TYPE_1__ ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_4 ;

 int VAR_5 ;

 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,struct inode*) ;
 int FUNC_3 (int ,struct inode*) ;
 struct tblock* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct inode*,TYPE_1__*,int *) ;
 int FUNC_6 (int ,struct inode*,int ) ;

__attribute__((used)) static s64 FUNC_7(tid_t VAR_6, struct inode *VAR_7)
{
 int VAR_8;
 struct tblock *VAR_9;

 FUNC_2("commitZeroLink: tid = %d, ip = 0x%p", VAR_6, VAR_7);

 VAR_8 = VAR_7->i_mode & VAR_5;
 switch (VAR_8) {
 case 128:
  break;
 case 129:

  if (VAR_7->i_size < VAR_3) {
   VAR_7->i_size = 0;
   return 0;
  }
  break;
 default:
  FUNC_1(VAR_8 != VAR_4);
  return 0;
 }

 FUNC_3(VAR_0, VAR_7);


 VAR_9 = FUNC_4(VAR_6);
 VAR_9->xflag |= VAR_1;




 if (FUNC_0(VAR_7)->ea.flag & VAR_2)

  FUNC_5(VAR_6, VAR_7, &FUNC_0(VAR_7)->ea, ((void*)0));




 if (FUNC_0(VAR_7)->acl.flag & VAR_2)

  FUNC_5(VAR_6, VAR_7, &FUNC_0(VAR_7)->acl, ((void*)0));







 if (VAR_7->i_size)
  return FUNC_6(VAR_6, VAR_7, 0);

 return 0;
}

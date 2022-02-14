
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nw_info_struct {int attributes; int dataStreamSize; } ;
struct TYPE_3__ {int dir_mode; int file_mode; int flags; } ;
struct ncp_server {TYPE_1__ m; } ;
struct ncp_entry_info {struct nw_info_struct i; } ;
struct inode {int i_mode; int i_size; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;

 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_13, struct ncp_entry_info *VAR_14)
{
 struct nw_info_struct *VAR_15 = &VAR_14->i;
 struct ncp_server *VAR_16 = FUNC_1(VAR_13);

 if (VAR_15->attributes & VAR_10) {
  VAR_13->i_mode = VAR_16->m.dir_mode;


  VAR_13->i_size = VAR_1;
 } else {
  VAR_13->i_mode = VAR_16->m.file_mode;
  VAR_13->i_size = FUNC_2(VAR_15->dataStreamSize);
 }
 if (VAR_15->attributes & VAR_11) VAR_13->i_mode &= ~VAR_8;
}

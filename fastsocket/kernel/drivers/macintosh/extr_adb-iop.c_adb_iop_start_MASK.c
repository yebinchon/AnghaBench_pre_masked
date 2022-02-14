
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct adb_request {int nbytes; int sent; scalar_t__* data; } ;
struct adb_iopmsg {int count; int cmd; int flags; } ;
typedef int amsg ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct adb_request* VAR_5 ;
 int FUNC_0 (int ,int ,struct adb_request*,int,int *,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned long VAR_7;
 struct adb_request *VAR_8;
 struct adb_iopmsg VAR_9;





 VAR_8 = VAR_5;
 if (!VAR_8) return;

 FUNC_2(VAR_7);
 VAR_9.flags = VAR_2;
 VAR_9.count = VAR_8->nbytes - 2;



 FUNC_3(&VAR_9.cmd, VAR_8->data + 1, VAR_8->nbytes - 1);

 VAR_8->sent = 1;
 VAR_4 = VAR_6;
 FUNC_1(VAR_7);




 FUNC_0(VAR_1, VAR_0, VAR_8,
    sizeof(VAR_9), (__u8 *) &VAR_9, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int num_closes; int ses; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {int LastWriteTime; scalar_t__ ByteCount; scalar_t__ FileID; } ;
typedef TYPE_1__ CLOSE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,int ,char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const int VAR_3, struct cifs_tcon *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 CLOSE_REQ *VAR_7 = ((void*)0);
 FUNC_2(1, "In CIFSSMBClose");


 VAR_6 = FUNC_4(VAR_2, 3, VAR_4, (void **) &VAR_7);
 if (VAR_6 == -VAR_0)
  return 0;
 if (VAR_6)
  return VAR_6;

 VAR_7->FileID = (__u16) VAR_5;
 VAR_7->LastWriteTime = 0xFFFFFFFF;
 VAR_7->ByteCount = 0;
 VAR_6 = FUNC_0(VAR_3, VAR_4->ses, (char *) VAR_7, 0);
 FUNC_3(&VAR_4->num_closes);
 if (VAR_6) {
  if (VAR_6 != -VAR_1) {

   FUNC_1(1, "Send error in Close = %d", VAR_6);
  }
 }


 if (VAR_6 == -VAR_0)
  VAR_6 = 0;

 return VAR_6;
}

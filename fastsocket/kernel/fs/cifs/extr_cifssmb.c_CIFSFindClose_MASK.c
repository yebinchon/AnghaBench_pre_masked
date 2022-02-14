
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int num_fclose; int ses; } ;
typedef int __u16 ;
struct TYPE_2__ {scalar_t__ ByteCount; int FileID; } ;
typedef TYPE_1__ FINDCLOSE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ,char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const int VAR_2, struct cifs_tcon *VAR_3,
       const __u16 VAR_4)
{
 int VAR_5 = 0;
 FINDCLOSE_REQ *VAR_6 = ((void*)0);

 FUNC_2(1, "In CIFSSMBFindClose");
 VAR_5 = FUNC_4(VAR_1, 1, VAR_3, (void **)&VAR_6);



 if (VAR_5 == -VAR_0)
  return 0;
 if (VAR_5)
  return VAR_5;

 VAR_6->FileID = VAR_4;
 VAR_6->ByteCount = 0;
 VAR_5 = FUNC_0(VAR_2, VAR_3->ses, (char *) VAR_6, 0);
 if (VAR_5)
  FUNC_1(1, "Send error in FindClose = %d", VAR_5);

 FUNC_3(&VAR_3->num_fclose);


 if (VAR_5 == -VAR_0)
  VAR_5 = 0;

 return VAR_5;
}

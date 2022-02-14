
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int num_flushes; int ses; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ ByteCount; scalar_t__ FileID; } ;
typedef TYPE_1__ FLUSH_REQ ;


 int VAR_0 ;
 int FUNC_0 (int const,int ,char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const int VAR_1, struct cifs_tcon *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 FLUSH_REQ *VAR_5 = ((void*)0);
 FUNC_2(1, "In CIFSSMBFlush");

 VAR_4 = FUNC_4(VAR_0, 1, VAR_2, (void **) &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5->FileID = (__u16) VAR_3;
 VAR_5->ByteCount = 0;
 VAR_4 = FUNC_0(VAR_1, VAR_2->ses, (char *) VAR_5, 0);
 FUNC_3(&VAR_2->num_flushes);
 if (VAR_4)
  FUNC_1(1, "Send error in Flush = %d", VAR_4);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int berr; int qdio; int status; int response; } ;
struct zfcp_dbf_hba_record {int * tag; TYPE_1__ u; int * tag2; } ;
struct debug_view {int dummy; } ;
typedef int debug_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (char**,int *) ;
 int FUNC_5 (char**,int *) ;
 int FUNC_6 (char**,int *) ;
 int FUNC_7 (char**,char*,int *) ;

__attribute__((used)) static int FUNC_8(debug_info_t *VAR_1, struct debug_view *VAR_2,
        char *VAR_3, const char *VAR_4)
{
 struct zfcp_dbf_hba_record *VAR_5 = (struct zfcp_dbf_hba_record *)VAR_4;
 char *VAR_6 = VAR_3;

 if (FUNC_2(VAR_5->tag, "dump", VAR_0) == 0)
  return 0;

 FUNC_7(&VAR_6, "tag", VAR_5->tag);
 if (FUNC_0(VAR_5->tag2[0]))
  FUNC_7(&VAR_6, "tag2", VAR_5->tag2);

 if (FUNC_2(VAR_5->tag, "resp", VAR_0) == 0)
  FUNC_5(&VAR_6, &VAR_5->u.response);
 else if (FUNC_2(VAR_5->tag, "stat", VAR_0) == 0)
  FUNC_6(&VAR_6, &VAR_5->u.status);
 else if (FUNC_2(VAR_5->tag, "qdio", VAR_0) == 0)
  FUNC_4(&VAR_6, &VAR_5->u.qdio);
 else if (FUNC_2(VAR_5->tag, "berr", VAR_0) == 0)
  FUNC_3(&VAR_6, &VAR_5->u.berr);

 if (FUNC_2(VAR_5->tag, "resp", VAR_0) != 0)
  VAR_6 += FUNC_1(VAR_6, "\n");
 return VAR_6 - VAR_3;
}

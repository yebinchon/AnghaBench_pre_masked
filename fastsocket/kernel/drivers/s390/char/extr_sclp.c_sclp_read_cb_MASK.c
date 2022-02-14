
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_req {scalar_t__ status; scalar_t__ sccb; } ;
struct sccb_header {int response_code; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sccb_header*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct sclp_req *VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 struct sccb_header *VAR_7;

 VAR_7 = (struct sccb_header *) VAR_4->sccb;
 if (VAR_4->status == VAR_0 && (VAR_7->response_code == 0x20 ||
     VAR_7->response_code == 0x220))
  FUNC_0(VAR_7);
 FUNC_1(&VAR_1, VAR_6);
 VAR_2 = VAR_3;
 FUNC_2(&VAR_1, VAR_6);
}

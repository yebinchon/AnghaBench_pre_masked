
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ mode; scalar_t__ psstate; int psmode; } ;
struct assoc_request {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ) ;
 int FUNC_3 (struct lbs_private*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_6,
                             struct assoc_request * VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(VAR_3);

 if (VAR_7->mode == VAR_6->mode)
  goto done;

 if (VAR_7->mode == VAR_1) {
  if (VAR_6->psstate != VAR_4)
   FUNC_2(VAR_6, VAR_0);
  VAR_6->psmode = VAR_2;
 }

 VAR_6->mode = VAR_7->mode;
 VAR_8 = FUNC_3(VAR_6, VAR_5, VAR_7->mode);

done:
 FUNC_1(VAR_3, "ret %d", VAR_8);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {scalar_t__ req; int tfm; int req_pool; } ;
struct convert_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct crypt_config*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct crypt_config *VAR_4,
       struct convert_context *VAR_5)
{
 if (!VAR_4->req)
  VAR_4->req = FUNC_3(VAR_4->req_pool, VAR_2);
 FUNC_1(VAR_4->req, VAR_4->tfm);
 FUNC_0(VAR_4->req, VAR_0 |
     VAR_1,
     VAR_3,
     FUNC_2(VAR_4, VAR_4->req));
}

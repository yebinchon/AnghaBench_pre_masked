
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int iv; int cryptlen; scalar_t__ assoclen; } ;


 int FUNC_0 (struct aead_request*,int ,scalar_t__,int ,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_0)
{
 unsigned VAR_1 = FUNC_1(FUNC_2(VAR_0));
 return FUNC_0(VAR_0, 0, VAR_0->assoclen + VAR_1,
   VAR_0->cryptlen, VAR_0->iv);
}

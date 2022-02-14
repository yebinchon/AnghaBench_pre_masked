
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int port_id; int cdev; } ;
struct cxgbi_pagepod_hdr {int dummy; } ;
struct cxgbi_gather_list {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,struct cxgbi_pagepod_hdr*,unsigned int,unsigned int,struct cxgbi_gather_list*,int) ;

__attribute__((used)) static int FUNC_1(struct cxgbi_sock *VAR_1, struct cxgbi_pagepod_hdr *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   struct cxgbi_gather_list *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_7, VAR_3 += VAR_7) {
  VAR_7 = VAR_4 - VAR_6;
  if (VAR_7 > VAR_0)
   VAR_7 = VAR_0;
  VAR_8 = FUNC_0(VAR_1->cdev, VAR_1->port_id, VAR_2,
     VAR_3, VAR_7, VAR_5, 4 * VAR_6);
  if (VAR_8 < 0)
   break;
 }
 return VAR_8;
}

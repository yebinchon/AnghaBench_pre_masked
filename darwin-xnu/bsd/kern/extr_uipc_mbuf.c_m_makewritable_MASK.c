
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; scalar_t__ m_len; struct mbuf* m_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf**,int,int,int *,int,int) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct mbuf **VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0),
     VAR_2 | VAR_1, VAR_7);
 return (VAR_8);
}

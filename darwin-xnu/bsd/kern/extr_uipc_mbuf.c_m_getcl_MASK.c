
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_2__ {void* ext_buf; } ;
struct mbuf {scalar_t__ m_type; scalar_t__ m_flags; TYPE_1__ m_ext; } ;
struct ext_ref {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*,void*,struct ext_ref*,int,int ) ;
 int FUNC_2 (struct mbuf*,int,int) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*) ;
 int * FUNC_9 (struct mbuf*) ;
 struct ext_ref* FUNC_10 (struct mbuf*) ;
 scalar_t__ FUNC_11 (struct mbuf*,int) ;
 struct mbuf* FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;

struct mbuf *
FUNC_15(int VAR_6, int VAR_7, int VAR_8)
{
 struct mbuf *VAR_9;
 int VAR_10 = FUNC_5(VAR_6);
 int VAR_11 = (VAR_8 & VAR_5);


 if (VAR_10 & VAR_0)
  VAR_10 |= VAR_1;

 VAR_9 = FUNC_12(FUNC_7(VAR_2), VAR_10);
 if (VAR_9 != ((void*)0)) {
  u_int16_t VAR_12;
  struct ext_ref *VAR_13;
  void *VAR_14;

  FUNC_6(VAR_9->m_type == VAR_3 && VAR_9->m_flags == VAR_4);
  VAR_14 = VAR_9->m_ext.ext_buf;
  VAR_13 = FUNC_10(VAR_9);

  FUNC_0(VAR_14 != ((void*)0) && VAR_13 != ((void*)0));
  FUNC_6(FUNC_3(VAR_9) && FUNC_9(VAR_9) == ((void*)0));

  VAR_12 = FUNC_4(VAR_9);

  FUNC_2(VAR_9, VAR_11, VAR_7);
  FUNC_1(VAR_9, VAR_14, VAR_13, 1, VAR_12);

  FUNC_14(VAR_7);
  FUNC_13(VAR_3);






 }
 return (VAR_9);
}

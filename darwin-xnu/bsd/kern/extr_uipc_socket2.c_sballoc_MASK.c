
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sockbuf {int sb_mbcnt; int sb_flags; int sb_so; int sb_ctl; int sb_cc; } ;
struct TYPE_2__ {int ext_size; } ;
struct mbuf {scalar_t__ m_type; int m_flags; scalar_t__ m_len; TYPE_1__ m_ext; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__*) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_4(struct sockbuf *VAR_9, struct mbuf *VAR_10)
{
 u_int32_t VAR_11 = 1;
 VAR_9->sb_cc += VAR_10->m_len;
 if (VAR_10->m_type != VAR_2 && VAR_10->m_type != VAR_3 &&
     VAR_10->m_type != VAR_4)
  VAR_9->sb_ctl += VAR_10->m_len;
 VAR_9->sb_mbcnt += VAR_0;

 if (VAR_10->m_flags & VAR_5) {
  VAR_9->sb_mbcnt += VAR_10->m_ext.ext_size;
  VAR_11 += (VAR_10->m_ext.ext_size >> VAR_1);
 }
 FUNC_0(VAR_11, &VAR_7);
 FUNC_1(VAR_7 > 0);
 if (VAR_7 > VAR_8)
  VAR_8 = VAR_7;





 if (VAR_9->sb_flags & VAR_6) {
  FUNC_2(VAR_9->sb_so, VAR_10->m_len);
  FUNC_3(VAR_9->sb_so, VAR_10->m_len);
 }
}

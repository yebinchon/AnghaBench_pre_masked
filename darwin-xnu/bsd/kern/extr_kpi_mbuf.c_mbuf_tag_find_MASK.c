
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct m_tag {size_t m_tag_len; } ;
typedef int mbuf_tag_type_t ;
typedef scalar_t__ mbuf_tag_id_t ;
typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct m_tag* FUNC_0 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

errno_t
FUNC_2(
 mbuf_t VAR_4,
 mbuf_tag_id_t VAR_5,
 mbuf_tag_type_t VAR_6,
 size_t *VAR_7,
 void **VAR_8)
{
 struct m_tag *VAR_9;
 u_int32_t VAR_10, VAR_11;

 if (VAR_7 != ((void*)0))
  *VAR_7 = 0;
 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);


 (void) FUNC_1(&VAR_10, &VAR_11,
     VAR_3);
 if (VAR_4 == ((void*)0) || (VAR_4->m_flags & VAR_2) == 0 ||
     VAR_5 < VAR_10 || VAR_5 > VAR_11 || VAR_7 == ((void*)0) ||
     VAR_8 == ((void*)0)) {
  return (VAR_0);
 }


 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0));
 if (VAR_9 == ((void*)0)) {
  return (VAR_1);
 }


 *VAR_7 = VAR_9->m_tag_len;
 *VAR_8 = VAR_9 + 1;

 return (0);
}

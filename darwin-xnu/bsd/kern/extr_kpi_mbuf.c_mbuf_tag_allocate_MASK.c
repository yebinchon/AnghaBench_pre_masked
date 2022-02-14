
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct m_tag {int dummy; } ;
typedef int mbuf_tag_type_t ;
typedef scalar_t__ mbuf_tag_id_t ;
typedef TYPE_1__* mbuf_t ;
typedef scalar_t__ mbuf_how_t ;
typedef int errno_t ;
struct TYPE_6__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct m_tag* FUNC_0 (scalar_t__,int ,size_t,scalar_t__,TYPE_1__*) ;
 struct m_tag* FUNC_1 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_2 (TYPE_1__*,struct m_tag*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int ) ;

errno_t
FUNC_4(
 mbuf_t VAR_7,
 mbuf_tag_id_t VAR_8,
 mbuf_tag_type_t VAR_9,
 size_t VAR_10,
 mbuf_how_t VAR_11,
 void** VAR_12)
{
 struct m_tag *VAR_13;
 u_int32_t VAR_14, VAR_15;

 if (VAR_12 != ((void*)0))
  *VAR_12 = ((void*)0);


 (void) FUNC_3(&VAR_14, &VAR_15,
     VAR_6);
 if (VAR_7 == ((void*)0) || (VAR_7->m_flags & VAR_4) == 0 ||
     VAR_8 < VAR_14 || VAR_8 > VAR_15 || VAR_10 < 1 ||
     (VAR_10 & 0xffff0000) != 0 || VAR_12 == ((void*)0)) {
  return (VAR_1);
 }


 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, ((void*)0));
 if (VAR_13 != ((void*)0)) {
  return (VAR_0);
 }


 VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, VAR_7);
 if (VAR_13 == ((void*)0)) {
  return (VAR_11 == VAR_5 ? VAR_2 : VAR_3);
 }


 FUNC_2(VAR_7, VAR_13);
 *VAR_12 = VAR_13 + 1;

 return (0);
}

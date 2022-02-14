
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct m_tag {int m_tag_len; } ;
struct m_drvaux_tag {scalar_t__ da_length; scalar_t__ da_family; scalar_t__ da_subfamily; } ;
typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct m_tag* FUNC_1 (TYPE_1__*,int ,int ,int *) ;

errno_t
FUNC_2(mbuf_t VAR_6, u_int32_t *VAR_7, u_int32_t *VAR_8,
    u_int32_t *VAR_9, void **VAR_10)
{
 struct m_drvaux_tag *VAR_11;
 struct m_tag *VAR_12;

 if (VAR_6 == ((void*)0) || !(VAR_6->m_flags & VAR_5) || VAR_10 == ((void*)0))
  return (VAR_0);

 *VAR_10 = ((void*)0);

 if ((VAR_12 = FUNC_1(VAR_6, VAR_2,
     VAR_3, ((void*)0))) == ((void*)0))
  return (VAR_1);


 FUNC_0(VAR_12->m_tag_len >= sizeof (*VAR_11));

 VAR_11 = (struct m_drvaux_tag *)(VAR_12 + 1);
 FUNC_0(VAR_11->da_length > 0 && VAR_11->da_length <= VAR_4);

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_11->da_family;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_11->da_subfamily;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11->da_length;

 *VAR_10 = (VAR_11 + 1);

 return (0);
}

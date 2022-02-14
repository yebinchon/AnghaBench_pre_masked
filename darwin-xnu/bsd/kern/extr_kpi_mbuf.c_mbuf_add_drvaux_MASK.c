
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_int32_t ;
struct m_tag {int dummy; } ;
struct m_drvaux_tag {size_t da_length; void* da_subfamily; void* da_family; } ;
typedef TYPE_1__* mbuf_t ;
typedef int mbuf_how_t ;
typedef int errno_t ;
struct TYPE_6__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct m_tag* FUNC_0 (int ,int ,int,int ,TYPE_1__*) ;
 struct m_tag* FUNC_1 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,struct m_tag*) ;

errno_t
FUNC_3(mbuf_t VAR_9, mbuf_how_t VAR_10, u_int32_t VAR_11,
    u_int32_t VAR_12, size_t VAR_13, void **VAR_14)
{
 struct m_drvaux_tag *VAR_15;
 struct m_tag *VAR_16;

 if (VAR_9 == ((void*)0) || !(VAR_9->m_flags & VAR_8) ||
     VAR_13 == 0 || VAR_13 > VAR_6)
  return (VAR_1);

 if (VAR_14 != ((void*)0))
  *VAR_14 = ((void*)0);


 if ((VAR_16 = FUNC_1(VAR_9, VAR_4,
     VAR_5, ((void*)0))) != ((void*)0))
  return (VAR_0);


 if ((VAR_16 = FUNC_0(VAR_4, VAR_5,
     sizeof (*VAR_15) + VAR_13, VAR_10, VAR_9)) == ((void*)0))
  return ((VAR_10 == VAR_7) ? VAR_2 : VAR_3);

 VAR_15 = (struct m_drvaux_tag *)(VAR_16 + 1);
 VAR_15->da_family = VAR_11;
 VAR_15->da_subfamily = VAR_12;
 VAR_15->da_length = VAR_13;


 FUNC_2(VAR_9, VAR_16);

 if (VAR_14 != ((void*)0))
  *VAR_14 = (VAR_15 + 1);

 return (0);
}

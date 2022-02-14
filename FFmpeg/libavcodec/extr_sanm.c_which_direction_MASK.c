
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum GlyphEdge { ____Placeholder_GlyphEdge } GlyphEdge ;
typedef enum GlyphDir { ____Placeholder_GlyphDir } GlyphDir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum GlyphDir FUNC_0(enum GlyphEdge VAR_9, enum GlyphEdge VAR_10)
{
    if ((VAR_9 == VAR_5 && VAR_10 == VAR_7) ||
        (VAR_10 == VAR_5 && VAR_9 == VAR_7) ||
        (VAR_9 == VAR_0 && VAR_10 != VAR_8) ||
        (VAR_10 == VAR_0 && VAR_9 != VAR_8))
        return VAR_4;
    else if ((VAR_9 == VAR_8 && VAR_10 != VAR_0) ||
             (VAR_10 == VAR_8 && VAR_9 != VAR_0))
        return VAR_1;
    else if ((VAR_9 == VAR_5 && VAR_10 != VAR_7) ||
             (VAR_10 == VAR_5 && VAR_9 != VAR_7))
        return VAR_2;
    else if ((VAR_9 == VAR_8 && VAR_10 == VAR_0) ||
             (VAR_10 == VAR_8 && VAR_9 == VAR_0) ||
             (VAR_9 == VAR_7 && VAR_10 != VAR_5) ||
             (VAR_10 == VAR_7 && VAR_9 != VAR_5))
        return VAR_3;

    return VAR_6;
}
